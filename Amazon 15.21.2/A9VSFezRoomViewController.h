//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "A9VSFezARExperienceActionsPanelInteraction-Protocol.h"
#import "A9VSFezCollectionPickerDrawerViewControllerDelegate-Protocol.h"
#import "A9VSFezDeleteProductViewDelegate-Protocol.h"
#import "A9VSFezDrawerViewControllerDelegate-Protocol.h"
#import "A9VSFezMessageBoardDelegate-Protocol.h"
#import "A9VSFezOutroViewControllerDelegate-Protocol.h"
#import "A9VSFezProductRecipeDrawerControllerDelegate-Protocol.h"
#import "A9VSFezRoomExhibitDelegate-Protocol.h"
#import "A9VSFezRoomsPanelDrawerViewControllerDelegate-Protocol.h"
#import "A9VSFezSYROverlayControllerRepresentable-Protocol.h"

@class A9VSFezARExperienceActionsPanel, A9VSFezCollectionPickerDrawerViewController, A9VSFezDisplayRoomOperation, A9VSFezEngine, A9VSFezMessagePresentor, A9VSFezOutroViewController, A9VSFezProductCollectionManager, A9VSFezProductDescriptor, A9VSFezProductRecipeDrawerController, A9VSFezRoom, A9VSFezRoomExhibit, A9VSFezRoomManager, A9VSFezRoomsPanelDrawerViewController, A9VSFezSaveRoomRetryConfigurator, A9VSFezSaveYourRoomViewController, A9VSFezTooltipPopoverController, CAGradientLayer, NSString;
@protocol A9VSFezRoomManagerOperation;

@interface A9VSFezRoomViewController : UIViewController <A9VSFezARExperienceActionsPanelInteraction, A9VSFezMessageBoardDelegate, A9VSFezOutroViewControllerDelegate, A9VSFezRoomExhibitDelegate, A9VSFezRoomsPanelDrawerViewControllerDelegate, A9VSFezProductRecipeDrawerControllerDelegate, A9VSFezDrawerViewControllerDelegate, A9VSFezDeleteProductViewDelegate, A9VSFezCollectionPickerDrawerViewControllerDelegate, A9VSFezSYROverlayControllerRepresentable>
{
    _Bool _isSelectedRoomStateModified;
    _Bool _shouldRedisplayRoom;
    A9VSFezRoomsPanelDrawerViewController *_myRoomsPanelDrawerViewController;
    A9VSFezCollectionPickerDrawerViewController *_collectionsPickerViewController;
    A9VSFezProductRecipeDrawerController *_productRecipeDrawerController;
    A9VSFezOutroViewController *_outroViewController;
    A9VSFezEngine *_engine;
    A9VSFezSaveYourRoomViewController *_parentSYRViewController;
    A9VSFezARExperienceActionsPanel *_arExperienceActionsPanel;
    id <A9VSFezRoomManagerOperation> _saveDisplayedRoomOperation;
    A9VSFezDisplayRoomOperation *_displayRoomOperation;
    CAGradientLayer *_linearBottomGradientLayer;
    A9VSFezMessagePresentor *_messagePresenter;
    A9VSFezRoomManager *_roomManager;
    A9VSFezRoomExhibit *_roomExhibit;
    A9VSFezRoom *_selectedRoom;
    A9VSFezProductCollectionManager *_productCollectionsManager;
    A9VSFezTooltipPopoverController *_addASINTooltipPopover;
    A9VSFezSaveRoomRetryConfigurator *_saveRoomRetryConfigurator;
}

@property(retain, nonatomic) A9VSFezSaveRoomRetryConfigurator *saveRoomRetryConfigurator; // @synthesize saveRoomRetryConfigurator=_saveRoomRetryConfigurator;
@property(retain, nonatomic) A9VSFezTooltipPopoverController *addASINTooltipPopover; // @synthesize addASINTooltipPopover=_addASINTooltipPopover;
@property(nonatomic) _Bool shouldRedisplayRoom; // @synthesize shouldRedisplayRoom=_shouldRedisplayRoom;
@property(readonly, nonatomic) A9VSFezProductCollectionManager *productCollectionsManager; // @synthesize productCollectionsManager=_productCollectionsManager;
@property(retain, nonatomic) A9VSFezRoom *selectedRoom; // @synthesize selectedRoom=_selectedRoom;
@property(readonly, nonatomic) A9VSFezRoomExhibit *roomExhibit; // @synthesize roomExhibit=_roomExhibit;
@property(readonly, nonatomic) A9VSFezRoomManager *roomManager; // @synthesize roomManager=_roomManager;
@property(readonly, nonatomic) A9VSFezMessagePresentor *messagePresenter; // @synthesize messagePresenter=_messagePresenter;
@property(retain, nonatomic) CAGradientLayer *linearBottomGradientLayer; // @synthesize linearBottomGradientLayer=_linearBottomGradientLayer;
@property(retain, nonatomic) A9VSFezDisplayRoomOperation *displayRoomOperation; // @synthesize displayRoomOperation=_displayRoomOperation;
@property(retain, nonatomic) id <A9VSFezRoomManagerOperation> saveDisplayedRoomOperation; // @synthesize saveDisplayedRoomOperation=_saveDisplayedRoomOperation;
@property(retain, nonatomic) A9VSFezARExperienceActionsPanel *arExperienceActionsPanel; // @synthesize arExperienceActionsPanel=_arExperienceActionsPanel;
@property(nonatomic) __weak A9VSFezSaveYourRoomViewController *parentSYRViewController; // @synthesize parentSYRViewController=_parentSYRViewController;
@property(nonatomic) __weak A9VSFezEngine *engine; // @synthesize engine=_engine;
@property(nonatomic) __weak A9VSFezOutroViewController *outroViewController; // @synthesize outroViewController=_outroViewController;
@property(nonatomic) _Bool isSelectedRoomStateModified; // @synthesize isSelectedRoomStateModified=_isSelectedRoomStateModified;
@property(retain, nonatomic) A9VSFezProductRecipeDrawerController *productRecipeDrawerController; // @synthesize productRecipeDrawerController=_productRecipeDrawerController;
@property(retain, nonatomic) A9VSFezCollectionPickerDrawerViewController *collectionsPickerViewController; // @synthesize collectionsPickerViewController=_collectionsPickerViewController;
@property(retain, nonatomic) A9VSFezRoomsPanelDrawerViewController *myRoomsPanelDrawerViewController; // @synthesize myRoomsPanelDrawerViewController=_myRoomsPanelDrawerViewController;
- (void).cxx_destruct;
- (void)didCloseOutroViewController;
- (void)presentOutroViewController;
- (void)presentAddASINTooltip;
- (void)updateAddASINToolTipStatus;
- (void)didDeleteProductFromRoom:(id)arg1;
- (void)didLoadProductInRoom:(id)arg1;
- (void)autoPlaceProduct:(id)arg1;
- (double)multiASINButtonBottomOffset;
- (void)collectionPickerDrawerViewController:(id)arg1 didPickRecentlyViewedASIN:(id)arg2 previousRecentlyViewedASIN:(id)arg3;
- (void)collectionPickerDrawerViewController:(id)arg1 didPickProduct:(id)arg2 previousPickedProduct:(id)arg3;
- (void)didPerformFirstTapOnDeleteView;
- (void)willRemoveLastASINFromScene;
- (void)didTapOnDeleteProductView;
- (void)didTapAddASINButton;
- (void)createAndShowCollectionPicker:(id)arg1;
- (void)presentCollectionsPickerViewController;
- (void)drawerViewController:(id)arg1 didMoveToDismissalSnapPoint:(id)arg2;
- (void)drawerViewController:(id)arg1 didUpdateViewFrame:(struct CGRect)arg2;
- (void)productRecipeDrawerController:(id)arg1 didAddToCartFailedForASIN:(id)arg2;
- (void)productRecipeDrawerController:(id)arg1 didAddToCartSucceedForASIN:(id)arg2;
- (void)productRecipeDrawerController:(id)arg1 didTapAddToCartButtonForASIN:(id)arg2;
- (void)productRecipeDrawerController:(id)arg1 didTapDetailsButtonForProduct:(id)arg2;
- (void)hideDeleteMultiASINButton;
- (void)dismissCollectionPicker;
- (void)dismissProductInfoCard;
- (void)presentProductInfoCard:(id)arg1;
- (void)updateProductInfoCardWithProduct:(id)arg1 shouldUpdateEquivalents:(_Bool)arg2;
- (void)roomExhibit:(id)arg1 didFailToDisplayRoom:(id)arg2 withError:(id)arg3;
- (void)roomExhibit:(id)arg1 didDisplayRoom:(id)arg2 placedASIN:(id)arg3 layoutAlreadyContainedPlacedASIN:(_Bool)arg4;
- (void)presentDeleteRoomRetryErrorAllert;
- (void)presentExitAlertControllerWithConfirmation:(CDUnknownBlockType)arg1;
- (void)presentSaveRoomOnExitWithConfirmation:(CDUnknownBlockType)arg1;
- (void)presentSaveRoomBeforeSwitchingWithConfirmation:(CDUnknownBlockType)arg1;
- (void)messageBoardDidUpdateFromMessage:(id)arg1 toMessage:(id)arg2;
- (void)presentRoomSavedMessage;
- (void)displayRoom:(id)arg1 withAssetData:(id)arg2;
- (void)displayRoom:(id)arg1 andPlaceASIN:(id)arg2 animated:(_Bool)arg3;
- (void)dismissRoomsPanelAnimated:(_Bool)arg1;
- (void)roomsPanelDrawerViewController:(id)arg1 didFailToLoadRoomsWithError:(id)arg2;
- (void)roomsPanelDrawerViewController:(id)arg1 didLoadRooms:(id)arg2;
- (void)roomsPanelDrawerViewController:(id)arg1 didFailToDeleteRoom:(id)arg2;
- (void)roomsPanelDrawerViewController:(id)arg1 didDeleteRoomWithIdentifier:(id)arg2 withNextRoomToLoad:(id)arg3 numberOfAvailableRooms:(unsigned long long)arg4;
- (void)roomsPanelDrawerViewController:(id)arg1 didSelectRoom:(id)arg2 atIndexPath:(id)arg3 onSelectionCompletion:(CDUnknownBlockType)arg4;
- (void)displaySelectedRoom:(id)arg1;
- (id)asinsForCollections;
- (id)loadedASINsInScene;
- (void)didFailToSaveRoomWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveRoomWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didTapSaveButton;
- (void)didTapShowMyRoomsButton;
- (void)setUpRoomsPanelDrawerViewController;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)showDeleteMultiASINButtonIfNeeded;
- (id)addRecentlyViewedASIN:(id)arg1 to:(id)arg2;
- (void)fetchCollectionsFromServerForASINs:(id)arg1;
- (void)showMultiASINExperience;
- (void)addBottomGradientIfNeeded;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithEngine:(id)arg1 syrController:(id)arg2;
@property(readonly, nonatomic) A9VSFezProductDescriptor *focusedProductDescriptor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
