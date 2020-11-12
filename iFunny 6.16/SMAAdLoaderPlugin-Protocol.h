//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class Protocol, SMAAPIContext;
@protocol SMAAdPresenterBuilding, SMAAdRequestExtras;

@protocol SMAAdLoaderPlugin <NSObject>
@property(readonly, nonatomic) Protocol *supportedAdPresenterProtocol;
@property(readonly, nonatomic) unsigned long long supportedFormats;
- (void)supplyExtras:(id <SMAAdRequestExtras>)arg1 format:(unsigned long long)arg2;
- (id <SMAAdPresenterBuilding>)builderWithApiContext:(SMAAPIContext *)arg1;
@end
