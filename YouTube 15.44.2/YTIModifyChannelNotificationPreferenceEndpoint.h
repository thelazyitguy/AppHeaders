//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface YTIModifyChannelNotificationPreferenceEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionsArray; // @dynamic actionsArray;
@property(readonly, nonatomic) unsigned long long actionsArray_Count; // @dynamic actionsArray_Count;
@property(retain, nonatomic) NSMutableArray *beforeRpcEndpointsArray; // @dynamic beforeRpcEndpointsArray;
@property(readonly, nonatomic) unsigned long long beforeRpcEndpointsArray_Count; // @dynamic beforeRpcEndpointsArray_Count;
@property(retain, nonatomic) NSMutableArray *failActionsArray; // @dynamic failActionsArray;
@property(readonly, nonatomic) unsigned long long failActionsArray_Count; // @dynamic failActionsArray_Count;
@property(nonatomic) _Bool hasParams; // @dynamic hasParams;
@property(copy, nonatomic) NSString *params; // @dynamic params;
@property(retain, nonatomic) NSMutableArray *secondaryParamsArray; // @dynamic secondaryParamsArray;
@property(readonly, nonatomic) unsigned long long secondaryParamsArray_Count; // @dynamic secondaryParamsArray_Count;
@property(retain, nonatomic) NSMutableArray *successActionsArray; // @dynamic successActionsArray;
@property(readonly, nonatomic) unsigned long long successActionsArray_Count; // @dynamic successActionsArray_Count;

@end

