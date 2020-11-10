//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NFUIRenderTimer, NSIndexPath, NSString, UICollectionView;
@protocol LolomoActionDelegate><LolomoViewDelegate, LolomoViewDelegate><LolomoActionDelegate;

@protocol LolomoReusableView <NSObject>
+ (id)dequeueForItemAtIndexPath:(NSIndexPath *)arg1 inCollectionView:(UICollectionView *)arg2 withLolomoViewDelegate:(id <LolomoViewDelegate><LolomoActionDelegate>)arg3;
+ (void)registerInCollectionView:(UICollectionView *)arg1 withLolomoViewDelegate:(id <LolomoViewDelegate><LolomoActionDelegate>)arg2;
- (void)configureWithViewModel:(id)arg1;
@property(nonatomic) __weak NFUIRenderTimer *renderTimer;
@property(nonatomic, readonly) id viewModel;
@property(nonatomic) __weak id <LolomoActionDelegate><LolomoViewDelegate> lolomoViewDelegate;
@property(nonatomic, readonly) _Bool isForReuse;

@optional
+ (id)viewModelForEntityId:(NSString *)arg1;
- (void)handleActive;
- (void)handleNotActive;
@end
