//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;
@protocol SMABannerAdPresenting;

@interface SMABannerRefresherResponse : NSObject
{
    id <SMABannerAdPresenting> _adPresenter;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id <SMABannerAdPresenting> adPresenter; // @synthesize adPresenter=_adPresenter;
- (void).cxx_destruct;
- (id)initWithAdPresenter:(id)arg1 error:(id)arg2;

@end
