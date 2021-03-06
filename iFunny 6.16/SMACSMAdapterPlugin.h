//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/SMAAdLoaderPlugin-Protocol.h>

@class NSString, Protocol;

@interface SMACSMAdapterPlugin : NSObject <SMAAdLoaderPlugin>
{
    Protocol *supportedAdPresenterProtocol;
    unsigned long long supportedFormats;
}

+ (void)unregisterAdapterClass:(Class)arg1;
+ (void)registerAdapterClass:(Class)arg1;
@property(readonly, nonatomic) unsigned long long supportedFormats; // @synthesize supportedFormats;
@property(readonly, nonatomic) Protocol *supportedAdPresenterProtocol; // @synthesize supportedAdPresenterProtocol;
- (void).cxx_destruct;
- (id)builderWithApiContext:(id)arg1;
- (void)supplyExtras:(id)arg1 format:(unsigned long long)arg2;
- (id)extraParameters;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

