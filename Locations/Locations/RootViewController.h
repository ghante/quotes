//
//  RootViewController.h
//  Locations
//
//  Created by Anirudha Ghante on 05/11/2012.
//  Copyright (c) 2012 Anirudha Ghante. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface RootViewController : UITableViewController<CLLocationManagerDelegate>{
    NSMutableArray *eventsArray;
    NSManagedObjectContext *managedObjectContext;
    
    CLLocationManager *locationManager;
    UIBarButtonItem *addButton;
}

@property (nonatomic, retain) NSMutableArray *eventsArray;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, retain) UIBarButtonItem *addButton;

- (void)addEvent;

@end
