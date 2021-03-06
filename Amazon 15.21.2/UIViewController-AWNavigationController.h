//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AFMSearchScopeParameters, AWToolbarItem, NSArray, NSDictionary;

@interface UIViewController (AWNavigationController)
+ (id)apCurrentTopViewController;
+ (id)apCurrentWindow;
@property(nonatomic) _Bool aw_independentOfPrevious;
- (void)performRotationCodeBlocks;
- (void)clearBlocks;
- (void)addCodeBlockForOnRotation:(CDUnknownBlockType)arg1;
- (id)getCodeBlockArray;
- (id)AWToolbarItemSourceQuickImpl_adapter;
- (void)setAWToolbarItemSourceQuickImpl_adapter:(id)arg1;
- (id)AWToolbarItemSourceQuickImpl_toolbarItemForBarButtonItem:(id)arg1;
- (void)AWToolbarItemSourceQuickImpl_updateToolbarItemsFromNotificationItemsAndNotify:(_Bool)arg1;
- (void)AWToolbarItemSourceQuickImpl_updateToolbarItemsFromNotificationItems;
- (void)AWToolbarItemSourceQuickImpl_setLeftToolbarItem:(id)arg1 rightToolbarItem:(id)arg2 notify:(_Bool)arg3;
- (void)AWToolbarItemSourceQuickImpl_setLeftToolbarItem:(id)arg1 rightToolbarItem:(id)arg2;
@property(retain, nonatomic) AWToolbarItem *AWToolbarItemSourceQuickImpl_rightToolbarItem;
@property(retain, nonatomic) AWToolbarItem *AWToolbarItemSourceQuickImpl_leftToolbarItem;
@property(nonatomic) _Bool AWToolbarItemSourceQuickImpl_useNotificationItems;
@property(readonly, nonatomic) NSArray *AWToolbarItemSourceQuickImpl_items;
@property(retain, nonatomic) NSDictionary *aw_moduleSpec;
@property(nonatomic) int aw_transitionType;
- (void)setAw_transitionTypeFromMenuState:(_Bool)arg1;
- (void)setNavigationOrigin:(id)arg1;
- (id)navigationOrigin;
- (void)a9vsfez_removeChildController:(id)arg1;
- (void)a9vsfez_addChildController:(id)arg1;
- (_Bool)uic_isVisible;
@property(nonatomic) long long aw_screenType;
@property(retain, nonatomic) AFMSearchScopeParameters *afmSearchScopeParameters;
- (void)updateModalPresentationToFullScreenForIOS13IfNeeded;
@end

