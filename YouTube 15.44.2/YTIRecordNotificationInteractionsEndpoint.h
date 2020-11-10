//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray;

@interface YTIRecordNotificationInteractionsEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionsArray; // @dynamic actionsArray;
@property(readonly, nonatomic) unsigned long long actionsArray_Count; // @dynamic actionsArray_Count;
@property(nonatomic) _Bool hasSerializedCreatorInteractionsRequest; // @dynamic hasSerializedCreatorInteractionsRequest;
@property(nonatomic) _Bool hasSerializedInteractionsRequest; // @dynamic hasSerializedInteractionsRequest;
@property(copy, nonatomic) NSData *serializedCreatorInteractionsRequest; // @dynamic serializedCreatorInteractionsRequest;
@property(copy, nonatomic) NSData *serializedInteractionsRequest; // @dynamic serializedInteractionsRequest;

@end
