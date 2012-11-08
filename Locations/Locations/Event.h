//
//  Event.h
//  Locations
//
//  Created by Anirudha Ghante on 05/11/2012.
//  Copyright (c) 2012 Anirudha Ghante. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Event : NSManagedObject

@property (nonatomic, retain) NSNumber * latitude;
@property (nonatomic, retain) NSDate * creationDate;
@property (nonatomic, retain) NSNumber * longitude;

@end
