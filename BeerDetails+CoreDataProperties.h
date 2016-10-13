//
//  BeerDetails+CoreDataProperties.h
//  BeerTracker
//
//  Created by DavidJi on 10/13/16.
//  Copyright © 2016 Andy Pereira. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "BeerDetails.h"

NS_ASSUME_NONNULL_BEGIN

@interface BeerDetails (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *image;
@property (nullable, nonatomic, retain) NSString *note;
@property (nullable, nonatomic, retain) NSNumber *rating;
@property (nullable, nonatomic, retain) NSManagedObject *beer;

@end

NS_ASSUME_NONNULL_END
