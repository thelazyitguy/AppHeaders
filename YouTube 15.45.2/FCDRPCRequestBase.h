//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/FCDRPCRequestBaseProtocol-Protocol.h>
#import <Module_Framework/NSCopying-Protocol.h>

@class FCDRPCParams, NSString;

@interface FCDRPCRequestBase : NSObject <NSCopying, FCDRPCRequestBaseProtocol>
{
    id _service;
    FCDRPCParams *_rpcParams;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FCDRPCParams *rpcParams; // @synthesize rpcParams=_rpcParams;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRPCParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

