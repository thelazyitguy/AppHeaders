//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFNAttributedTextModel;

@interface T1LatestHomeTimelineMenuTitleItem : NSObject
{
    TFNAttributedTextModel *_menuTitleTextModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNAttributedTextModel *menuTitleTextModel; // @synthesize menuTitleTextModel=_menuTitleTextModel;
- (id)_t1_buildTitleAttrStringWithTitle:(id)arg1 subtitle:(id)arg2 imageNamed:(id)arg3 imageTintColor:(id)arg4;
- (id)_t1_buildAccessibilityLabelWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 imageNamed:(id)arg3 imageTintColor:(id)arg4;
- (id)init;

@end

