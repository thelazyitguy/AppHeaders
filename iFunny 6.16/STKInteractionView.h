//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UITapGestureRecognizer;

@interface STKInteractionView : UIView
{
    id _contentView;
    UIView *_insetView;
    UITapGestureRecognizer *_gesture;
    CDUnknownBlockType _interaction;
    id _target;
    SEL _action;
    struct UIEdgeInsets _contentInsets;
}

@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(copy, nonatomic) CDUnknownBlockType interaction; // @synthesize interaction=_interaction;
@property(retain, nonatomic) UITapGestureRecognizer *gesture; // @synthesize gesture=_gesture;
@property(retain, nonatomic) UIView *insetView; // @synthesize insetView=_insetView;
@property(retain, nonatomic) id contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)performSelector;
- (void)tapGestureAction:(id)arg1;
- (void)addGesture;
- (void)addInteraction:(CDUnknownBlockType)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)addContentInsent:(struct UIEdgeInsets)arg1;

@end
