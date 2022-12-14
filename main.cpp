#include <random>
#include <ctime>
#include <map>
#include <iostream>
#include "Topics.hpp"

int RandomInt(const int& min, const int& max)
{
	if (max < min)
		return min;

	return rand() % (max + 1 - min) + min;
}

std::string RandomElement(const std::vector<std::string>& values, const std::string& avoid = "")
{
	std::string result;
	do
	{
		result = values[RandomInt(0, values.size() - 1)];
	} while (result == avoid);

	return result;
}

int main(int argc, char** argv)
{
	srand(time(0));

	/* Map topics to arrays */
	std::map<std::string, std::vector<std::string>> topic_map;
	topic_map["distro"] 				= distros;
	topic_map["desktop environment"] 	= desktop_environments;
	topic_map["window manager"] 		= tiling_window_managers;
	topic_map["shell"] 					= shells;
	topic_map["terminal emulator"] 		= terminal_emulators;
	topic_map["music player"] 			= music_players;
	topic_map["video player"] 			= video_players;
	topic_map["package manager"] 		= package_managers;
	topic_map["matrix client"] 			= matrix_clients;
	topic_map["text editor"] 			= text_editors;

	int question_count = 1;
	if (argc > 1)
		question_count = std::stoi(argv[1]);

	for (int i = 0; i < question_count; ++i)
	{
		/* Pick a topic */
		std::string topic = RandomElement(topics);

		int question_type = RandomInt(0, 7);
		switch (question_type)
		{
			case (0):
			{
				std::string first_value = RandomElement(topic_map[topic]);
				std::string second_value = RandomElement(topic_map[topic], first_value);

				std::cout << RandomElement(question_words) << " " << topic << " " << RandomElement(comparisons) << "? " << first_value << " or " << second_value << std::endl;
				break;
			}

			case (1):
			{
				/* Skip this question type if the topic happens to be "distro" */
				if (topic == "distro")
				{
					--i;
					continue;
				}

				std::cout << "When will " << RandomElement(topic_map[topic]) << " version " << RandomInt(0, 9) << "." << RandomInt(0, 9) << "." << RandomInt(0, 9) << " be in " << RandomElement(distros) << " repositories?" << std::endl;
				break;
			}

			case (2):
			{
				std::cout << "Is " << RandomElement(topic_map[topic]) << " " << RandomElement(grade) << "?" << std::endl;
				break;
			}

			case (3):
			{
				std::cout << RandomElement(question_words) << " " << RandomElement(topics) << " " << RandomElement(most_questions) << "?" << std::endl;
				break;
			}

			case (4):
			{
				std::string first_value = RandomElement(topic_map[topic]);
				std::string second_value = RandomElement(topic_map[topic], first_value);
				std::cout << "What is the difference between " << first_value << " and " << second_value << "?" << std::endl;
				break;
			}

			case (5):
			{
				std::string first_value = RandomElement(topic_map[topic]);
				std::string second_value = RandomElement(topic_map[topic], first_value);
				std::cout << "Should I use " << first_value << " or " << second_value << "?" << std::endl;
				break;
			}

			case (6):
			{
				std::cout << "Should I use Steam Proton version " << RandomInt(1, 9) << "." << RandomInt(0, 9) << " or " << RandomInt(1, 9) << "." << RandomInt(0, 9) << "?" << std::endl;
				break;
			}

			case (7):
			{
				std::string first_value = RandomElement(distros);
				std::string second_value = RandomElement(distros, first_value);
				std::cout << RandomElement(question_words) << " distro has the best kernel? " << first_value << " or " << second_value << "?" << std::endl;
				break;
			}

			default:
			{
				std::cout << "Missing question..." << std::endl;
				break;
			}
		}
	}
}
