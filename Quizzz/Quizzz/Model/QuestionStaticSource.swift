//
//  QuestionList.swift
//  Quizzz
//
//  Created by lynx on 22/04/2018.
//  Copyright © 2018 Gulnaz. All rights reserved.
//

import Foundation

class QuestionStaticSource: QuestionSource{
    var questions: [Question]
    
    init() {
        questions = []
        
        questions.append(Question(withText: "Lightning never strikes in the same place twice.", andAnswer: false, andComment: "It strikes in the same place quite a lot. The Empire State Building gets struck over 100 times a year."))
        
        questions.append(Question(withText: "If you cry in space the tears just stick to your face.", andAnswer: true))
        
        questions.append(Question(withText: "If you cut an earthworm in half, both halves can regrow their body.", andAnswer: false, andComment: "Only one half of an earthworm can regenerate when it's cut in half, not both halves."))
        
        questions.append(Question(withText: "Humans can distinguish between over a trillion different smells.", andAnswer: true, andComment: "It's not as good as a dog's, but the human nose is still pretty incredible."))
        
        questions.append(Question(withText: "Adults have fewer bones than babies do.", andAnswer: true, andComment: "Lots of bones (like the cranium) start out as several fragments at birth, then fuse together into a single bone later in life."))
        
        questions.append(Question(withText: "Napoleon Bonaparte was extremely short.", andAnswer: false, andComment: "Even though he's widely believed to have been short, he was actually above average height for his time."))
        
        questions.append(Question(withText: "Goldfish only have a memory of three seconds.", andAnswer: false, andComment: "Goldfishes' legendarily short memory is a common belief, but it's been debunked repeatedly. They can actually remember things for quite a long time."))
        
        questions.append(Question(withText: "There are more cells of bacteria in your body than there are human cells.", andAnswer: true, andComment: "Your body has around ten times as many bacterial cells in it than your own cells."))
        
        questions.append(Question(withText: "Your fingernails and hair keep growing after you die.", andAnswer: false, andComment: "They really don't." ))
        
        questions.append(Question(withText: "Birds are dinosaurs.", andAnswer: true, andComment: "Not all dinosaurs became extinct; some of them survived, and every bird alive today is descended from those survivors." ))
        
        questions.append(Question(withText: "It costs the U.S. Mint more to make pennies and nickels than the coins are actually worth.", andAnswer: true, andComment: "U.S. taxpayers lost over $100 million in 2013 just through the coins being made." ))
        
        questions.append(Question(withText: "Water spirals down the plughole in opposite directions in the northern and southern hemispheres.", andAnswer: false, andComment: "It really doesn't (even though some people on the equator make a living fooling tourists into thinking it does...)" ))
        
        questions.append(Question(withText: "Buzz Aldrin was the first man to urinate on the moon.", andAnswer: true, andComment: "The second man to stand on fthe moon was the first to pee there (into a special bag in his spacesuit) – shortly after he stepped off the ladder of Apollo 11's Lunar Module." ))
        
        questions.append(Question(withText: "Twinkies have an infinite shelf life.", andAnswer: false, andComment: "The official shelf life of a Twinkie is 45 days. People have kept them around for longer, but they become inedible." ))
        
        questions.append(Question(withText: "Humans can’t breathe and swallow at the same time.", andAnswer: true, andComment: "It's because our voice box is lower in the throat than other primates (who can do both at once.) On the plus side, this means we can use language..." ))
        
        questions.append(Question(withText: "The popular image of Santa Claus – chubby, bearded, in red and white clothes – was invented by Coca-Cola for an ad campaign.", andAnswer: false, andComment: "Santa was portrayed like that for decades before Coke got in on the act." ))
        
        questions.append(Question(withText: "The top of the Eiffel Tower leans away from the sun", andAnswer: true, andComment: "The metal of the tower expands in the heat of the sun, so the sun-facing side is always slightly bigger than the one facing away – making it lean as much as seven inches away from the sun." ))
        
        questions.append(Question(withText: "Drinking alcohol kills brain cells.", andAnswer: false, andComment: "Drinking pretty much any non-fatal amount of alcohol won't add enough alcohol to your blood stream to destroy your neurons." ))
        
        questions.append(Question(withText: "The owner of the company that makes Segways died after accidentally driving his Segway off a cliff.", andAnswer: true, andComment: "Jimi Heselden died from his accident in 2010." ))
        
        questions.append(Question(withText: "The American inventor of the deep-freezing process was a Mr Birdseye?", andAnswer: true))
        
        questions.append(Question(withText: "Sideburns were named after a prominant wearer, a General Ambrose E Burnside?", andAnswer: true))
    
        questions.append(Question(withText: "Scotland Yard was originally the name of a medieval house used by Scots Kings visiting London?", andAnswer: true ))
        
        questions.append(Question(withText: "The Oxford-Cambridge Boat Race has never ended in a dead heat?", andAnswer: false, andComment: "it did in 1877"))
        
        questions.append(Question(withText: "The first non-white British MP was elected over 100 years ago?", andAnswer: true, andComment: "in 1892"))
        
        questions.append(Question(withText: "The Queen holds UK Passport No.1?", andAnswer: false, andComment: "she doesn't have one" ))
        
        questions.append(Question(withText: "3 times more people were killed in the 1906 San Francisco Earthquake than on the Titanic in 1912?", andAnswer: false, andComment: "It was reversed"))
        
        questions.append(Question(withText: "A granny, a sheepshank and a bowline are all parts of chimney?", andAnswer: false, andComment: "False all are types of knot"))
        
        questions.append(Question(withText: "You can still be executed for certain crimes in England?", andAnswer: false))
        
        questions.append(Question(withText: "An emu cannot fly?", andAnswer: true))
        
        questions.append(Question(withText: "A Dowager is the widow of a peer or a baronet?", andAnswer: true))
        
        questions.append(Question(withText: "Julie Andrews was the original Eliza Doolittle in My Fair lady?", andAnswer: true))
        
        questions.append(Question(withText: "Fleas are bloodsuckers?", andAnswer: true))
        
        questions.append(Question(withText: "Wyoming is on the Canadian border of the USA?", andAnswer: false))
        
        questions.append(Question(withText: "Two is a Prime number?", andAnswer: true))
        
        questions.append(Question(withText: "Quaker is another name for a Mormon?", andAnswer: false))
        
        questions.append(Question(withText: "Top Eastenders totty Wendy Richard is the cousin of top religious singing superstar Cliff Richard?", andAnswer: false))
        
        questions.append(Question(withText: "Silly mid on is a fielding position in cricket?", andAnswer: true))
        
        questions.append(Question(withText: "Spartacus was a great Roman general?", andAnswer: false))
        
        questions.append(Question(withText: "Edinburgh is further East than Carlisle?", andAnswer: false))
        
        questions.append(Question(withText: "Kangaroos are only an inch long at birth?", andAnswer: true))
        
        questions.append(Question(withText: "Warner Brothers originally wanted Ronald Reagan to play the part of Rick Blaine in Casablanca?", andAnswer: true))
        
        questions.append(Question(withText: "The most northerly point on the British mainland is actually named after a Dutchman?", andAnswer: false))
        
        questions.append(Question(withText: "Cary Grant and Noel Coward were both offered the part of James Bond in Dr. No?", andAnswer: true))
        
        questions.append(Question(withText: "George Washington's body was preserved in a barrel of Whiskey for 32 years?", andAnswer: false))
        
        questions.append(Question(withText: "Born in Crew in 1837, George Gascoigne was the great-grandfather of Bamber Gascoigne and the great-great-grandfather of Paul Gascoigne?", andAnswer: false))
        
        questions.append(Question(withText: "The Lascar Parrot of Borneo has a venemous spit that can paralyse small rodents within seconds?", andAnswer: false))
        
        questions.append(Question(withText: "The can-opener was not invented until 45 years after the tin can?", andAnswer: true))
        
        questions.append(Question(withText: "President Theodore Roosevelt's son was called Kermit?", andAnswer: true))
        
        questions.append(Question(withText: "Picasso said: \"Art is a truth that lets us recognise a lie\"?", andAnswer: false))
        
        questions.append(Question(withText: "Male wasps have no sting?", andAnswer: true))
        
        questions.append(Question(withText: "Zoetrope was the Greek goddess of flowers?", andAnswer: false))
        
        questions.append(Question(withText: "Sinn Fein means \"Soldiers of Destiny\"?", andAnswer: false))
        
        questions.append(Question(withText: "A hellebore is a poisonous plant?", andAnswer: true))
        
        questions.append(Question(withText: "Utah is nicknamed \"The waterfall state\"?", andAnswer: false))
        
        questions.append(Question(withText: "A manometer measures the pressure of liquids?", andAnswer: true))
        
        questions.append(Question(withText: "Tex Avery unsuccessfully fought Joe Louis for the World Heavyweight Boxing championship?", andAnswer: false))
        
        questions.append(Question(withText: "Coedine suppresses a cough?", andAnswer: true))
        
        questions.append(Question(withText: "US presidents William Henry Harrison and Benjamin Harrison were grandfather and grandson?", andAnswer: true))
        
        questions.append(Question(withText: "The capital of North Korea is Pyongyang", andAnswer: true))
        
        questions.append(Question(withText: "If writing a letter to an Archdeacon, the envelope would read \"The venerable the Archdeacon of.\"?", andAnswer: true))
        
        questions.append(Question(withText: "The area of a circle is given by the formula 𝞹*D", andAnswer: false, andComment: "𝞹*R²"))
        
        questions.append(Question(withText: "Mel Gibson was born in Australia", andAnswer: false, andComment: "born in USA then moved to Australia"))
        
        questions.append(Question(withText: "The Blue Boy was painted by Thomas Gainsborough", andAnswer: true))
        
        questions.append(Question(withText: "John Moores University can be found in Liverpool", andAnswer: true))
        
        questions.append(Question(withText: "The official language of the Bahamas is English", andAnswer: true))
        
        questions.append(Question(withText: "Princess Sophie of Greece is married to King Juan Carlos of Spain", andAnswer: true))
        
        questions.append(Question(withText: "John Stienbeck declined his award for the Nobel Prize in Literature", andAnswer: false, andComment: "Jean-Paul Satre"))
        
        questions.append(Question(withText: "70's singer song writing duo Gallagher and Lyle who had a hit with \"I wanna stay with you\" were in fact golfers Bernard Gallagher and Sandy Lyle", andAnswer: false))
        
        questions.append(Question(withText: "Electrons are larger than molecules.", andAnswer: false))
        questions.append(Question(withText: "The Atlantic Ocean is the biggest ocean on Earth.", andAnswer:false, andComment: "Pacific Ocean" ))
        
        questions.append(Question(withText: "The chemical make up food often changes when you cook it.", andAnswer: true))
        
        questions.append(Question(withText: "Sharks are mammals.", andAnswer: false, andComment: "Fish"))
        
        questions.append(Question(withText: "The human body has four lungs.", andAnswer: false))
        
        questions.append(Question(withText: "Atoms are most stable when their outer shells are full.", andAnswer: true))
        
        questions.append(Question(withText: "Filtration separates mixtures based upon their particle size.", andAnswer: true))
        
        questions.append(Question(withText: "Venus is the closest planet to the Sun.", andAnswer: false, andComment: "Mercury"))
        
        questions.append(Question(withText: "Conductors have low resistance.", andAnswer: true))
        
        questions.append(Question(withText: "Molecules can have atoms from more than one chemical element.", andAnswer: true))
        
        questions.append(Question(withText: "Water is an example of a chemical element.", andAnswer: false))
        
        questions.append(Question(withText: "The study of plants is known as botany.", andAnswer: true))
        
        questions.append(Question(withText: "Mount Kilimanjaro is the tallest mountain in the world.", andAnswer: false, andComment: "Mount Everest"))
        
        questions.append(Question(withText: "Floatation separates mixtures based on density.", andAnswer: true))
        
        questions.append(Question(withText: "Herbivores eat meat.", andAnswer: false))
        
        questions.append(Question(withText: "Atomic bombs work by atomic fission.", andAnswer: true))
        
        questions.append(Question(withText: "Molecules are chemically bonded.", andAnswer: true))
        
        questions.append(Question(withText: "Spiders have six legs.", andAnswer: false, andComment: "8"))
        
        questions.append(Question(withText: "Kelvin is a measure of temperature.", andAnswer: true))
        
        questions.append(Question(withText: "The human skeleton is made up of less than 100 bones.", andAnswer: false, andComment: "206"))
        
    }
}
