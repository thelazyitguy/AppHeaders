//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray;

@interface WJ2ProvisionableDeviceAuthenticationData : NSObject
{
    NSMutableArray *_certificateChainArray;
    NSData *_signature;
}

@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSMutableArray *certificateChainArray; // @synthesize certificateChainArray=_certificateChainArray;
- (void).cxx_destruct;
- (id)init;

@end
