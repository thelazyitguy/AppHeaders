//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTResponderEvent.h>

@class NSString, UIImage;

@interface YTSetViewControllerTitleEvent : YTResponderEvent
{
    NSString *_title;
    UIImage *_titleImage;
}

+ (id)eventWithTitle:(id)arg1 image:(id)arg2 firstResponder:(id)arg3;
+ (id)eventWithTitle:(id)arg1 firstResponder:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *titleImage; // @synthesize titleImage=_titleImage;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 image:(id)arg2 firstResponder:(id)arg3;

@end

