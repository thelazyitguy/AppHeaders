//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface IBGUserStepLog : NSManagedObject
{
}

+ (id)userStepslogFetchRequestWithID:(id)arg1;
+ (id)entityName;
+ (id)fetchRequest;
- (id)toDictionary;

// Remaining properties
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *klass; // @dynamic klass;
@property(copy, nonatomic) NSString *label; // @dynamic label;
@property(copy, nonatomic) NSString *message; // @dynamic message;
@property(nonatomic) double timeEpoch; // @dynamic timeEpoch;
@property(copy, nonatomic) NSString *type; // @dynamic type;
@property(copy, nonatomic) NSString *view; // @dynamic view;

@end
