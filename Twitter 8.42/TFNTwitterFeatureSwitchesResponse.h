//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSModel-Protocol.h>

@class NSData;

@interface TFNTwitterFeatureSwitchesResponse : NSObject <TFSModel>
{
    NSData *_data;
}

+ (id)featureSwitchesResponseWithData:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (id)initWithData:(id)arg1;
- (id)init;

@end
