//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, UIDragItem, UITargetedDragPreview, UIView;
@protocol UIDragAnimating, UIDragSession, UITextDragRequest, UITextDraggable;

@protocol UITextDragDelegate <NSObject>

@optional
- (void)textDraggableView:(UIView<UITextDraggable> *)arg1 dragSessionDidEnd:(id <UIDragSession>)arg2 withOperation:(unsigned long long)arg3;
- (void)textDraggableView:(UIView<UITextDraggable> *)arg1 dragSessionWillBegin:(id <UIDragSession>)arg2;
- (void)textDraggableView:(UIView<UITextDraggable> *)arg1 willAnimateLiftWithAnimator:(id <UIDragAnimating>)arg2 session:(id <UIDragSession>)arg3;
- (UITargetedDragPreview *)textDraggableView:(UIView<UITextDraggable> *)arg1 dragPreviewForLiftingItem:(UIDragItem *)arg2 session:(id <UIDragSession>)arg3;
- (NSArray *)textDraggableView:(UIView<UITextDraggable> *)arg1 itemsForDrag:(id <UITextDragRequest>)arg2;
@end

