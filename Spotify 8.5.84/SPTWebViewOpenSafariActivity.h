//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class NSURL;
@protocol SPTLinkDispatcher;

@interface SPTWebViewOpenSafariActivity : UIActivity
{
    NSURL *_URL;
    id <SPTLinkDispatcher> _linkDispatcher;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)activityDidFinish:(_Bool)arg1;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initWithLinkDispatcher:(id)arg1;

@end
