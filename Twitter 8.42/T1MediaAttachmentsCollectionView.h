//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@interface T1MediaAttachmentsCollectionView : UICollectionView
{
    _Bool _firstInteractiveMovementUpdate;
    double _distanceRequiredForNextInteractiveMovementUpdate;
    struct CGPoint _prevInteractiveMovementTargetPosition;
    struct CGPoint _prevInteractiveMovementUpdateTargetPosition;
}

@property(nonatomic, getter=isFirstInteractiveMovementUpdate) _Bool firstInteractiveMovementUpdate; // @synthesize firstInteractiveMovementUpdate=_firstInteractiveMovementUpdate;
@property(nonatomic) double distanceRequiredForNextInteractiveMovementUpdate; // @synthesize distanceRequiredForNextInteractiveMovementUpdate=_distanceRequiredForNextInteractiveMovementUpdate;
@property(nonatomic) struct CGPoint prevInteractiveMovementUpdateTargetPosition; // @synthesize prevInteractiveMovementUpdateTargetPosition=_prevInteractiveMovementUpdateTargetPosition;
@property(nonatomic) struct CGPoint prevInteractiveMovementTargetPosition; // @synthesize prevInteractiveMovementTargetPosition=_prevInteractiveMovementTargetPosition;
- (void)updateInteractiveMovementTargetPosition:(struct CGPoint)arg1;
- (_Bool)beginInteractiveMovementForItemAtIndexPath:(id)arg1;

@end

