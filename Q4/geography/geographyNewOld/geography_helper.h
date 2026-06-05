// 2 Problem Definition
// Swarm robotics (and collective robotics in general) is a field that has been seen as a new approach
// to robotics- and has consequently exploded in popularity in academia and research in the past
// few decades. Work in this field has naturally settled into into two major factions based on com
// plementary philosophies. On one side we see a large number of extremely cheap, low capability
// agents with little compute power running rudimentary but cleverly crafted algorithms to produce
// an intentional behaviour collectively (such as moving large objects, etc), and on the other hand
// we have collectives of relatively fewer, more sophisticated agents with advanced imaging and large
// compute capabilities.
// While the former tends to dominate academic research, the latter is where corporate interests lie.
// This has created a gap in the middle, where there is potential for a third faction with an associated
// set of applications. Exploring this ideological gap is the primary motivation for this project.
// Project Vyuha aims to take an implementation-centric approach where a large emphasis will be
// placed on practical implementation of the proposed ideology. Therefore, this project aims to direct
// significant efforts towards solving practical challenges such as inter-agent ranging, high efficiency
// communication, battery longevity, etc.
// What We Are Solving This project aims to fill this ideological gap by laying the foundations for
// a new class of Swarm Technology: one that is inexpensive and mass-producible, yet sophisticated,
// deeply interconnected and able (to solve more advanced problems, such as what the sophisticated
// groups can achieve). At the same time, it aims to solve practical implementation problems which
// have prevented Swarms from entering the real world and have confined them to simulations and
// theory.
// Who This Problem Affects Solving this problem has the potential to revolutionize several indus
// tries- from Agriculture to Defense and from Search and Rescue to Scientific Exploration- any
// domain involving high-risk/hostile environments. This technology would greatly bring down the
// costs incurred by the user in situations where the agents could be destroyed in operations, without
// impacting the overall operation of the swarm, while keeping costs and economies in mind.
// Why is This Problem Worth Solving The current market for robotic swarms exclusively features
// expensive agents with large compute capability, often running entire single-board-computers on
// them, built on the philosophy of “Failure is not an option”. This makes it hard to justify the
// economic cost of using robotic swarms for high-risk tasks, even when it safer to use robotic agents
// than people. Making robotic swarms cheaper can also result in greater efficiencies in existing
// industries, where financial considerations were the only restricting factor to the adoption of robotic
// swarms, such as the agriculture industry.
// Our Objectives The final goal of this project is to build a platform (hardware + software) that
// enables such a swarm architecture, while ensuring that the platform is customizable enough to allow
// for the end-user to design an agent to suit their exact requirements. A list of the exact deliverables
// and end-goals have been listed in the following sections.
// 3
// 3 Current Practice & Gap to Fill
// To fill the aforementioned ideological gap, a new class of technology is required: one that is in
// expensive and mass-producible, yet sophisticated, deeply interconnected and able (to solve more
// advanced problems, such as what the sophisticated groups can achieve). Technically, swarms have
// been appealing because they solve the ”Single Point of Failure” problem that plagues traditional
// robotics- which consequently makes them ideal to solve problems involving high risk and hostile
// environments. Because swarms rely on local interactions, their ability to work without external aid
// such as internet infrastructure, etc have only added to the appeal.
// Besides, a significant Implementation Gap also persists.
// Historically, swarm research has been preoccupied with two complementary studies: predict
// ing collective behavior from known individual algorithms and synthesizing individual algorithms to
// achieve a specific collective behavior. Because both these problems pertain to mathematics and
// algorithms, the majority of swarm research has been happening within theory and computer simu
// lations. This means that along with the ideology gap mentioned above, there is also a fundamental
// hardware-implementation gap to be tackled.
// One such challenge is that many algorithms are based on proximity to surrounding agents but
// realizing accurate and reliable inter-agent ranging is a non-trivial hardware challenge. Many other
// aspects of these theorized algorithms also lead to challenging hardware problems in implementation- problems that need to be tackled to make this technology useful. Real world problems- such as
// battery longevity, cost-compute balance, resilience in external network denied environments, lossless
// communication, memory management- make realizing Swarms difficult.
// Howthe Problem is Currently Solved: As made clear in Section 2, current solutions are bifurcated
// into two dominant philosophies. The academic sector typically studies large quantities of extremely
// low-capability agents running rudimentary algorithms for collective behavior. Conversely, corporate
// and industrial interests rely on small collectives of highly sophisticated, expensive agents equipped
// with substantial compute power (often entire single-board computers) and other advanced devices.
// These systems are generally built on the high-cost ethos that ”Failure is not an option,”prioritizing
// individual agent survival over the resilient, sacrificial nature of a true swarm.
// Key Limitations of Current Approaches: As made apparent by the preceding sections, the pri
// mary limitation is the ”ideological gap”existing between the two current factions. Academic swarms
// often lack the sophistication and interconnectivity required to solve advanced, real-world problems
// and also lack appropriate hardware. Meanwhile, the corporate approach is economically un-viable
// for high-risk or hostile environments; the high cost per agent makes the potential for loss a pro
// hibitive financial risk. Furthermore, as stated above, current practices are heavily weighted toward
// theoretical simulations, which fail to account for the ”Single Point of Failure”vulnerabilities inherent
// in traditional, non-swarm robotics.
// Why have these limitations not been solved yet? Continuing with the background given above,
// limitations persist because swarm research has historically been preoccupied with the mathematical
// synthesis of collective behavior rather than physical execution. This has resulted in a fundamental
// ”hardware-implementation gap.”As stated above, many theorized algorithms rely on assumptions
// such as perfect proximity sensing or infinite power- assumptions that do not translate easily to the
// physical world. Solving these problems requires overcoming ”non-trivial”hardware challenges, such
// 4
// as accurate inter-agent ranging, battery longevity, and robust communication in network-denied
// environments, which the current theoretical bias in the field has largely left untackled.
// 4 Proposed Solution
// What we are Building: In this project, the aim is to:
// 1. Introduce and develop a new Swarm Architecture called Liquid Role Architecture (LRA).
// 2. Design and develop the hardware and the software (which shall be called SwarmOS for ease
// of reference) needed to realist it.
// 3. Develop and test various solutions to hardware implementation challenges like inter-agent
// ranging and communication.
// 4. Create a collective of simple bots to test, benchmark and demonstrate this new paradigm.
// However, this project does not seek to innovate in the fields of Locomotion, Mechanical Design,
// Sensor Design or other aspects that are specific to a particular application. LRA and the accom
// panying hardware is designed to be platform-agnostic; it is a control and coordination layer that
// functions independently of the agent’s physical form factor. Only aspects pertaining to this layer
// are declared to be within scope.
// Throughout this tenure, the project aims to file for multiple modes of Intellectual Property (such
// as papers, patents, etc) documenting this exploration.
// What Makes Our Approach Different While the general approach to introducing new ideologies is
// to solely traverse the theoretical pathway, we intend on building a foundation for this new category
// of swarms, both from a algorithmic and hardware implementation perspective. This is severely
// lacking in this domain. We aim to develop a product that will inspire more such developments in
// this field, eventually reaching the markets and becoming an accessible commercial product.
// The Core Idea Theoverall operation of the swarm is based around the idea of decentralized control
// among the agents, and dynamic role and task allocation among the bots based on the collective
// state of the swarm.
// Why We Believe This Will Work We believe that this approach is the most effective method of
// building low-cost agents that are indented to be used in large numbers. Having a hub-and-spoke
// style control architecture would lead to a physical and/or compute bottle-neck, which would heavily
// limit the operational capabilities of the swarm.

// 2 Problem Definition
// Swarm robotics (and collective robotics in general) is a field that has been seen as a new approach
// to robotics- and has consequently exploded in popularity in academia and research in the past
// few decades. Work in this field has naturally settled into into two major factions based on com
// plementary philosophies. On one side we see a large number of extremely cheap, low capability
// agents with little compute power running rudimentary but cleverly crafted algorithms to produce
// an intentional behaviour collectively (such as moving large objects, etc), and on the other hand
// we have collectives of relatively fewer, more sophisticated agents with advanced imaging and large
// compute capabilities.
// While the former tends to dominate academic research, the latter is where corporate interests lie.
// This has created a gap in the middle, where there is potential for a third faction with an associated
// set of applications. Exploring this ideological gap is the primary motivation for this project.
// Project Vyuha aims to take an implementation-centric approach where a large emphasis will be
// placed on practical implementation of the proposed ideology. Therefore, this project aims to direct
// significant efforts towards solving practical challenges such as inter-agent ranging, high efficiency
// communication, battery longevity, etc.
// What We Are Solving This project aims to fill this ideological gap by laying the foundations for
// a new class of Swarm Technology: one that is inexpensive and mass-producible, yet sophisticated,
// deeply interconnected and able (to solve more advanced problems, such as what the sophisticated
// groups can achieve). At the same time, it aims to solve practical implementation problems which
// have prevented Swarms from entering the real world and have confined them to simulations and
// theory.
// Who This Problem Affects Solving this problem has the potential to revolutionize several indus
// tries- from Agriculture to Defense and from Search and Rescue to Scientific Exploration- any
// domain involving high-risk/hostile environments. This technology would greatly bring down the
// costs incurred by the user in situations where the agents could be destroyed in operations, without
// impacting the overall operation of the swarm, while keeping costs and economies in mind.
// Why is This Problem Worth Solving The current market for robotic swarms exclusively features
// expensive agents with large compute capability, often running entire single-board-computers on
// them, built on the philosophy of “Failure is not an option”. This makes it hard to justify the
// economic cost of using robotic swarms for high-risk tasks, even when it safer to use robotic agents
// than people. Making robotic swarms cheaper can also result in greater efficiencies in existing
// industries, where financial considerations were the only restricting factor to the adoption of robotic
// swarms, such as the agriculture industry.
// Our Objectives The final goal of this project is to build a platform (hardware + software) that
// enables such a swarm architecture, while ensuring that the platform is customizable enough to allow
// for the end-user to design an agent to suit their exact requirements. A list of the exact deliverables
// and end-goals have been listed in the following sections.
// 3
// 3 Current Practice & Gap to Fill
// To fill the aforementioned ideological gap, a new class of technology is required: one that is in
// expensive and mass-producible, yet sophisticated, deeply interconnected and able (to solve more
// advanced problems, such as what the sophisticated groups can achieve). Technically, swarms have
// been appealing because they solve the ”Single Point of Failure” problem that plagues traditional
// robotics- which consequently makes them ideal to solve problems involving high risk and hostile
// environments. Because swarms rely on local interactions, their ability to work without external aid
// such as internet infrastructure, etc have only added to the appeal.
// Besides, a significant Implementation Gap also persists.
// Historically, swarm research has been preoccupied with two complementary studies: predict
// ing collective behavior from known individual algorithms and synthesizing individual algorithms to
// achieve a specific collective behavior. Because both these problems pertain to mathematics and
// algorithms, the majority of swarm research has been happening within theory and computer simu
// lations. This means that along with the ideology gap mentioned above, there is also a fundamental
// hardware-implementation gap to be tackled.
// One such challenge is that many algorithms are based on proximity to surrounding agents but
// realizing accurate and reliable inter-agent ranging is a non-trivial hardware challenge. Many other
// aspects of these theorized algorithms also lead to challenging hardware problems in implementation- problems that need to be tackled to make this technology useful. Real world problems- such as
// battery longevity, cost-compute balance, resilience in external network denied environments, lossless
// communication, memory management- make realizing Swarms difficult.
// Howthe Problem is Currently Solved: As made clear in Section 2, current solutions are bifurcated
// into two dominant philosophies. The academic sector typically studies large quantities of extremely
// low-capability agents running rudimentary algorithms for collective behavior. Conversely, corporate
// and industrial interests rely on small collectives of highly sophisticated, expensive agents equipped
// with substantial compute power (often entire single-board computers) and other advanced devices.
// These systems are generally built on the high-cost ethos that ”Failure is not an option,”prioritizing
// individual agent survival over the resilient, sacrificial nature of a true swarm.
// Key Limitations of Current Approaches: As made apparent by the preceding sections, the pri
// mary limitation is the ”ideological gap”existing between the two current factions. Academic swarms
// often lack the sophistication and interconnectivity required to solve advanced, real-world problems
// and also lack appropriate hardware. Meanwhile, the corporate approach is economically un-viable
// for high-risk or hostile environments; the high cost per agent makes the potential for loss a pro
// hibitive financial risk. Furthermore, as stated above, current practices are heavily weighted toward
// theoretical simulations, which fail to account for the ”Single Point of Failure”vulnerabilities inherent
// in traditional, non-swarm robotics.
// Why have these limitations not been solved yet? Continuing with the background given above,
// limitations persist because swarm research has historically been preoccupied with the mathematical
// synthesis of collective behavior rather than physical execution. This has resulted in a fundamental
// ”hardware-implementation gap.”As stated above, many theorized algorithms rely on assumptions
// such as perfect proximity sensing or infinite power- assumptions that do not translate easily to the
// physical world. Solving these problems requires overcoming ”non-trivial”hardware challenges, such
// 4
// as accurate inter-agent ranging, battery longevity, and robust communication in network-denied
// environments, which the current theoretical bias in the field has largely left untackled.
// 4 Proposed Solution
// What we are Building: In this project, the aim is to:
// 1. Introduce and develop a new Swarm Architecture called Liquid Role Architecture (LRA).
// 2. Design and develop the hardware and the software (which shall be called SwarmOS for ease
// of reference) needed to realist it.
// 3. Develop and test various solutions to hardware implementation challenges like inter-agent
// ranging and communication.
// 4. Create a collective of simple bots to test, benchmark and demonstrate this new paradigm.
// However, this project does not seek to innovate in the fields of Locomotion, Mechanical Design,
// Sensor Design or other aspects that are specific to a particular application. LRA and the accom
// panying hardware is designed to be platform-agnostic; it is a control and coordination layer that
// functions independently of the agent’s physical form factor. Only aspects pertaining to this layer
// are declared to be within scope.
// Throughout this tenure, the project aims to file for multiple modes of Intellectual Property (such
// as papers, patents, etc) documenting this exploration.
// What Makes Our Approach Different While the general approach to introducing new ideologies is
// to solely traverse the theoretical pathway, we intend on building a foundation for this new category
// of swarms, both from a algorithmic and hardware implementation perspective. This is severely
// lacking in this domain. We aim to develop a product that will inspire more such developments in
// this field, eventually reaching the markets and becoming an accessible commercial product.
// The Core Idea Theoverall operation of the swarm is based around the idea of decentralized control
// among the agents, and dynamic role and task allocation among the bots based on the collective
// state of the swarm.
// Why We Believe This Will Work We believe that this approach is the most effective method of
// building low-cost agents that are indented to be used in large numbers. Having a hub-and-spoke
// style control architecture would lead to a physical and/or compute bottle-neck, which would heavily
// limit the operational capabilities of the swarm.






























#pragma message("\n\
In file included from /home/freshman/iitm_macaque_defense_system/src/thestart_iguess.c:2:\n\
/home/freshman/iitm_macaque_defense_system/geography/geographyFinalNew/header.h:24:112: error: no matching function for call to ‘std::__1::__hash_table<IITM::Macaque::ThreatProfile, std::__1::hash<IITM::Macaque::ThreatProfile>, std::__1::equal_to<IITM::Macaque::ThreatProfile>, std::__1::allocator<IITM::Macaque::ThreatProfile>>::____emplace_unique_key_args(const unsigned long&, std::__1::piecewise_construct_t, std::__1::tuple<const unsigned long&>, std::__1::tuple<>)’\n\
 In instantiation of ‘std::__1::basic_ostream<_CharT, _Traits>& std::__1::operator<<(std::__1::basic_ostream<_CharT, _Traits>&, const std::__1::basic_string<_CharT, _Traits, _Alloc>&) [with _CharT = char; _Traits = std::__1::char_traits<char>; _Alloc = std::__1::allocator<char>]’:\n\
/usr/include/c++/v1/__hash_table:2144:9: note: in instantiation of member function ‘std::__1::__hash_table<std::__1::__hash_value_type<unsigned long, IITM::Macaque::BehavioralMatrix<C11_Dialect>>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, IITM::Macaque::BehavioralMatrix<C11_Dialect>>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, IITM::Macaque::BehavioralMatrix<C11_Dialect>>, std::__1::equal_to<unsigned long>, std::__1::hash<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, IITM::Macaque::BehavioralMatrix<C11_Dialect>>>>::__rehash’ requested here\n\
/home/freshman/iitm_macaque_defense_system/geography/geographyFinalNew/../../modules/some math i found online.c:84:12: required from ‘_Tp* std::__1::__vector_base<_Tp, _Allocator>::____make_gap_and_insert(std::__1::__vector_base<_Tp, _Allocator>::const_iterator, std::__1::__vector_base<_Tp, _Allocator>::size_type, std::__1::__vector_base<_Tp, _Allocator>::size_type, const _Tp&) [with _Tp = IITM::Macaque::BehavioralMatrix<C11_Dialect>; _Allocator = std::__1::allocator<IITM::Macaque::BehavioralMatrix<C11_Dialect>>]’\n\
/usr/include/c++/v1/ext/pb_ds/detail/resize_policy/sample_size_policy.hpp:52:14: note: candidate template ignored: substitution failure [with _Args = <const unsigned long &, std::__1::piecewise_construct_t, std::__1::tuple<const unsigned long &>, std::__1::tuple<>>, _Target = geographyFinalNew::supplementaryFiles::TOD]: requires secondary linkage properties\n\
          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\
/usr/include/c++/v1/__hash_table:912:43: note: candidate function not viable: requires at least 3 arguments, but 1 was provided\n\
     ____emplace_unique_key_args(const _Key& __k, _Args&&... __args);\n\
     ^                           ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\
In file included from /home/freshman/iitm_macaque_defense_system/geography/geographyFinalNew/header.h:3:\n\
/home/freshman/iitm_macaque_defense_system/geography/geographyFinalNew/supplementaryFiles/TOD.h:12:3: error: invalid operands to binary expression (‘std::__1::basic_ostream<char>’ and ‘const IITM::Macaque::ThreatProfile’)\n\
   __dest << __src;\n\
   ~~~~~~ ^  ~~~~~\n\
/usr/include/c++/v1/ostream:218:20: note: candidate template ignored: could not match ‘const _Tp *’ against ‘IITM::Macaque::ThreatProfile’\n\
 basic_ostream<_CharT, _Traits>& operator<<(basic_ostream<_CharT, _Traits>& __os, const _Tp *__str);\n\
                                ^\n\
/usr/include/c++/v1/ostream:231:20: note: candidate template ignored: could not match ‘_CharT’ against ‘unsigned char’\n\
 basic_ostream<_CharT, _Traits>& operator<<(basic_ostream<_CharT, _Traits>& __os, _CharT __c);\n\
                                ^\n\
/usr/include/c++/v1/ostream:274:20: note: candidate template ignored: could not match ‘const char *’ against ‘IITM::Macaque::ThreatProfile’\n\
 basic_ostream<_CharT, _Traits>& operator<<(basic_ostream<_CharT, _Traits>& __os, const char *__str);\n\
                                ^\n\
/home/freshman/iitm_macaque_defense_system/timeOfDay/headers/geography.c:41:19: warning: implicit conversion from ‘int’ to ‘double’ may lose precision [-Wconversion]\n\
   double delta = (INSTI_VALIDATION_VECTOR & 0xFFFF);\n\
                  ^~~~~~~~~~~~~~~~~~~~~~~~\n\
[PIPELINE OVERRIDE]: CRITICAL SYMBOL RESOLUTION DEVIATION IN TARGET GRAPH DETECTED.\n\
[PIPELINE OVERRIDE]: FORCING FALLBACK COMPILATION UNIT INLINE ON INSTANTIATION HOOK.\n\
")