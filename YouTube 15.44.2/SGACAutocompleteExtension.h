//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class SGACAutocompleteExtension_ApiCall, SGACAutocompleteExtension_ApiResult, SGACAutocompleteExtension_CacheStatus, SGACAutocompleteExtension_Count, SGACAutocompleteExtension_DeviceInfo, SGACAutocompleteExtension_Error, SGACAutocompleteExtension_Latency, SGACAutocompleteExtension_Memory, SGACAutocompleteExtension_RpcRequest, SGACAutocompleteExtension_RpcResponse, SLOGSocialAffinityExtension_AutocompleteSessions, SLOGSocialAffinityExtension_SocialAffinityClientInterface;

@interface SGACAutocompleteExtension : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SGACAutocompleteExtension_ApiCall *apiCall; // @dynamic apiCall;
@property(retain, nonatomic) SGACAutocompleteExtension_ApiResult *apiResult; // @dynamic apiResult;
@property(retain, nonatomic) SLOGSocialAffinityExtension_AutocompleteSessions *autocompleteSessions; // @dynamic autocompleteSessions;
@property(retain, nonatomic) SGACAutocompleteExtension_CacheStatus *cacheStatus; // @dynamic cacheStatus;
@property(retain, nonatomic) SLOGSocialAffinityExtension_SocialAffinityClientInterface *clientInterface; // @dynamic clientInterface;
@property(retain, nonatomic) SGACAutocompleteExtension_Count *count; // @dynamic count;
@property(retain, nonatomic) SGACAutocompleteExtension_DeviceInfo *deviceInfo; // @dynamic deviceInfo;
@property(retain, nonatomic) SGACAutocompleteExtension_Error *error; // @dynamic error;
@property(nonatomic) int eventType; // @dynamic eventType;
@property(nonatomic) _Bool hasApiCall; // @dynamic hasApiCall;
@property(nonatomic) _Bool hasApiResult; // @dynamic hasApiResult;
@property(nonatomic) _Bool hasAutocompleteSessions; // @dynamic hasAutocompleteSessions;
@property(nonatomic) _Bool hasCacheStatus; // @dynamic hasCacheStatus;
@property(nonatomic) _Bool hasClientInterface; // @dynamic hasClientInterface;
@property(nonatomic) _Bool hasCount; // @dynamic hasCount;
@property(nonatomic) _Bool hasDeviceInfo; // @dynamic hasDeviceInfo;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasEventType; // @dynamic hasEventType;
@property(nonatomic) _Bool hasLatency; // @dynamic hasLatency;
@property(nonatomic) _Bool hasMemory; // @dynamic hasMemory;
@property(nonatomic) _Bool hasRpcRequest; // @dynamic hasRpcRequest;
@property(nonatomic) _Bool hasRpcResponse; // @dynamic hasRpcResponse;
@property(retain, nonatomic) SGACAutocompleteExtension_Latency *latency; // @dynamic latency;
@property(retain, nonatomic) SGACAutocompleteExtension_Memory *memory; // @dynamic memory;
@property(retain, nonatomic) SGACAutocompleteExtension_RpcRequest *rpcRequest; // @dynamic rpcRequest;
@property(retain, nonatomic) SGACAutocompleteExtension_RpcResponse *rpcResponse; // @dynamic rpcResponse;

@end

