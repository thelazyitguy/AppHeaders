//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SPTSavedAdEntityModel : NSObject
{
    NSString *_identifier;
    NSURL *_clickThroughURL;
    NSURL *_coverArtURL;
    NSString *_advertiser;
    NSString *_title;
    NSString *_actionText;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *advertiser; // @synthesize advertiser=_advertiser;
@property(readonly, nonatomic) NSURL *coverArtURL; // @synthesize coverArtURL=_coverArtURL;
@property(readonly, nonatomic) NSURL *clickThroughURL; // @synthesize clickThroughURL=_clickThroughURL;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithDictionary:(id)arg1;

@end
