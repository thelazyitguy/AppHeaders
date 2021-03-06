//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSString;

@interface TSKLBackendAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool criticalError; // @dynamic criticalError;
@property(nonatomic) unsigned int elapsedTimeMs; // @dynamic elapsedTimeMs;
@property(nonatomic) unsigned int errorCode; // @dynamic errorCode;
@property(nonatomic) _Bool hasCriticalError; // @dynamic hasCriticalError;
@property(nonatomic) _Bool hasElapsedTimeMs; // @dynamic hasElapsedTimeMs;
@property(nonatomic) _Bool hasErrorCode; // @dynamic hasErrorCode;
@property(nonatomic) _Bool hasListId; // @dynamic hasListId;
@property(nonatomic) _Bool hasNumResults; // @dynamic hasNumResults;
@property(nonatomic) _Bool hasNumTasksCompleted; // @dynamic hasNumTasksCompleted;
@property(nonatomic) _Bool hasNumTasksCreated; // @dynamic hasNumTasksCreated;
@property(nonatomic) _Bool hasSuccess; // @dynamic hasSuccess;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(copy, nonatomic) NSString *listId; // @dynamic listId;
@property(nonatomic) unsigned int numResults; // @dynamic numResults;
@property(nonatomic) unsigned int numTasksCompleted; // @dynamic numTasksCompleted;
@property(nonatomic) unsigned int numTasksCreated; // @dynamic numTasksCreated;
@property(nonatomic) _Bool success; // @dynamic success;
@property(nonatomic) int type; // @dynamic type;

@end

