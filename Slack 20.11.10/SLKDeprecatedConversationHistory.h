//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString;

@interface SLKDeprecatedConversationHistory : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic, retain) NSNumber *latestTimestampNumber; // @dynamic latestTimestampNumber;
@property(nonatomic) _Bool markedForDeletion; // @dynamic markedForDeletion;
@property(nonatomic) _Bool needsFetchingNewer; // @dynamic needsFetchingNewer;
@property(nonatomic, retain) NSNumber *oldestTimestampNumber; // @dynamic oldestTimestampNumber;
@property(nonatomic) _Bool reachedOldEnd; // @dynamic reachedOldEnd;
@property(nonatomic, copy) NSString *tsid; // @dynamic tsid;

@end
