//
//  ResultsApp.h
//  FlowerForAll
//
//  Created by Pierre-Mikael Legris on 28.09.11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "FlowerApp.h"
#import "ResultsApp_Nav.h"

@interface ResultsApp : FlowerApp {
    IBOutlet UIView* controllerView; 
    IBOutlet UIToolbar* toolbar; 
    ResultsApp_Nav* statViewController;
    
    IBOutlet UIBarButtonItem *sendButton;
}

@property (nonatomic, retain)  IBOutlet UIView* controllerView;  
@property (nonatomic, retain)  IBOutlet UIToolbar* toolbar; 

@property (nonatomic, retain) UIBarButtonItem *sendButton;

- (IBAction)sendButtonPressed:(id)sender;

@end
