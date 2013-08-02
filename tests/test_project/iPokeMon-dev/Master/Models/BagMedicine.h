//
//  BagMedicine.h
//  iPokeMon
//
//  Created by Kaijie Yu on 3/17/12.
//  Copyright (c) 2012 Kjuly. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface BagMedicine : NSManagedObject

@property (nonatomic, retain) NSNumber * code;
@property (nonatomic, retain) id icon;
@property (nonatomic, retain) NSNumber * sid;
@property (nonatomic, retain) NSNumber * type;
@property (nonatomic, retain) NSNumber * price;
@property (nonatomic, retain) id location;

@end
