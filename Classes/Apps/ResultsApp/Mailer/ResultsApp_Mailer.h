//
//  ResultsApp_Mailer.h
//  FlowerForAll
//
//  Created by Pierre-Mikael Legris (Perki) on 27.09.11.
//  Copyright 2011 fondation Defitech. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface ResultsApp_Mailer 

+ (int) exericesToCSV:(NSMutableData*)data html:(NSMutableString*)html;

@end
