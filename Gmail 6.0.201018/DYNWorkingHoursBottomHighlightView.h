//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DYNInkView;
@protocol DYNColorSchemeService;

@interface DYNWorkingHoursBottomHighlightView : UIView
{
    DYNInkView *_inkView;
    id <DYNColorSchemeService> _colorSchemeService;
    unsigned char _state;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned char state; // @synthesize state=_state;
- (void)createSubviews;
- (void)setState:(unsigned char)arg1;
- (void)setState:(unsigned char)arg1 origin:(struct CGPoint)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
