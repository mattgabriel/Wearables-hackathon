//
//  MainViewController.h
//  AudioGrid 3D
//
//  Created by Martin Lobger on 13/02/14.
//  Copyright (c) 2014 GN Store Nord A/S. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <IHS/IHS.h>

@interface MainViewController : UIViewController

@property (nonatomic, weak) IBOutlet UIButton* ihsLogo;
@property (nonatomic, weak) IBOutlet IHSAudio3DGridView* audioGrid;

@property (nonatomic, strong) IHSDevice* ihsDevice;

@property (nonatomic, strong) NSString* playerId;
@property (nonatomic, strong) NSString* requestURL;




@property double xPos;
@property double yPos;
@property double zPos;
@property double heading;




@property (retain, nonatomic) NSURLConnection *connection;
@property (retain, nonatomic) IBOutlet UIButton *btn_syncronous;
@property (retain, nonatomic) IBOutlet UIButton *btn_post;
@property (retain, nonatomic) IBOutlet UIButton *btn_get;
@property (retain, nonatomic) NSMutableData *receivedData;


@end
