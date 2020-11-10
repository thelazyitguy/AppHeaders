//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSString;

@interface IBGVisualUserStepLog : NSManagedObject
{
}

+ (id)userStepslogFetchRequestWithReportId:(id)arg1;
+ (id)userStepslogWithScreenshotIdentifier:(id)arg1;
+ (id)userStepslogFetchRequestWithID:(id)arg1;
+ (id)dictionaryRepresentationFrom:(id)arg1 parentScreenIdentifier:(id)arg2 view:(id)arg3 screenName:(id)arg4 timeEpoch:(double)arg5;
+ (id)entityName;
+ (id)fetchRequest;
- (_Bool)hasScreenshot;
- (void)assignUserStepDataFromDict:(id)arg1 sessionId:(id)arg2;
- (id)userStepId;
- (id)dictionaryRepresentation;

// Remaining properties
@property(retain, nonatomic) NSData *buttonIcon; // @dynamic buttonIcon;
@property(copy, nonatomic) NSString *buttonIconName; // @dynamic buttonIconName;
@property(copy, nonatomic) NSString *eventType; // @dynamic eventType;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(nonatomic) _Bool isAttached; // @dynamic isAttached;
@property(nonatomic) _Bool isParent; // @dynamic isParent;
@property(copy, nonatomic) NSString *orientation; // @dynamic orientation;
@property(copy, nonatomic) NSString *parentScreenIdentifier; // @dynamic parentScreenIdentifier;
@property(copy, nonatomic) NSString *reportId; // @dynamic reportId;
@property(copy, nonatomic) NSString *screenIdentifier; // @dynamic screenIdentifier;
@property(copy, nonatomic) NSString *screenName; // @dynamic screenName;
@property(retain, nonatomic) NSData *screenshot; // @dynamic screenshot;
@property(copy, nonatomic) NSString *screenshotIdentifier; // @dynamic screenshotIdentifier;
@property(nonatomic) double timeEpoch; // @dynamic timeEpoch;
@property(copy, nonatomic) NSString *view; // @dynamic view;

@end
