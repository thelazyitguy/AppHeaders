//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class TOKOverlayGestureManager, TOKOverlayGestureSnapLine, UIGestureRecognizer, UIView;
@protocol TOKOverlayGestureManagerManagedView;

@protocol TOKOverlayGestureManagerDelegate <NSObject>
- (void)overlayGestureManager:(TOKOverlayGestureManager *)arg1 willEndDraggingView:(UIView<TOKOverlayGestureManagerManagedView> *)arg2 targetPosition:(inout struct CGPoint *)arg3;
- (void)overlayGestureManager:(TOKOverlayGestureManager *)arg1 didDragView:(UIView<TOKOverlayGestureManagerManagedView> *)arg2 targetPosition:(inout struct CGPoint *)arg3;
- (void)overlayGestureManager:(TOKOverlayGestureManager *)arg1 interactionDidEnd:(UIGestureRecognizer *)arg2;
- (void)overlayGestureManager:(TOKOverlayGestureManager *)arg1 interactionDidBegin:(UIGestureRecognizer *)arg2;
- (void)overlayGestureManager:(TOKOverlayGestureManager *)arg1 didTapView:(UIView<TOKOverlayGestureManagerManagedView> *)arg2;
- (_Bool)overlayGestureManagerCanBegin:(TOKOverlayGestureManager *)arg1;

@optional
- (void)overlayGestureManager:(TOKOverlayGestureManager *)arg1 didEndSnappingView:(UIView<TOKOverlayGestureManagerManagedView> *)arg2 toSnapLine:(TOKOverlayGestureSnapLine *)arg3;
- (void)overlayGestureManager:(TOKOverlayGestureManager *)arg1 didSnapView:(UIView<TOKOverlayGestureManagerManagedView> *)arg2 toSnapLine:(TOKOverlayGestureSnapLine *)arg3;
- (void)overlayGestureManager:(TOKOverlayGestureManager *)arg1 didBeginSnappingView:(UIView<TOKOverlayGestureManagerManagedView> *)arg2 toSnapLine:(TOKOverlayGestureSnapLine *)arg3;
@end

