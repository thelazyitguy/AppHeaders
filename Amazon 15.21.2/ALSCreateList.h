//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ALSNetworkingService;

@interface ALSCreateList : NSObject
{
    id <ALSNetworkingService> _networkingService;
}

@property(retain, nonatomic) id <ALSNetworkingService> networkingService; // @synthesize networkingService=_networkingService;
- (void).cxx_destruct;
- (id)parseCreateListResponse:(id)arg1 withError:(id *)arg2 withStatusCode:(id *)arg3;
- (void)createListWithInput:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)initWithNetworkingService:(id)arg1;

@end
