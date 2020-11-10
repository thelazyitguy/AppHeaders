//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/ASMNavigationInitiator-Protocol.h>

@class ASMPromptProgressBarBlock, MDCProgressView, UILabel;

@interface ASMPromptProgressBarBlockView : UIView <ASMNavigationInitiator>
{
    CDUnknownBlockType _navigateTo;
    ASMPromptProgressBarBlock *_block;
    MDCProgressView *_progressView;
    UILabel *_startLabel;
    UILabel *_endLabel;
}

+ (id)viewWithBlock:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *endLabel; // @synthesize endLabel=_endLabel;
@property(retain, nonatomic) UILabel *startLabel; // @synthesize startLabel=_startLabel;
@property(retain, nonatomic) MDCProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) ASMPromptProgressBarBlock *block; // @synthesize block=_block;
@property(copy, nonatomic) CDUnknownBlockType navigateTo; // @synthesize navigateTo=_navigateTo;
- (void)setupVerticalLabelConstraints:(id)arg1;
- (id)initWithBlock:(id)arg1;

@end
