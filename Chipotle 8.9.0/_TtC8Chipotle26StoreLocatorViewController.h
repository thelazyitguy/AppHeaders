//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC8Chipotle22ChipotleViewController.h"

#import "MKLocalSearchCompleterDelegate-Protocol.h"

@class MKMapView, NSLayoutConstraint, UIButton, UICollectionView, UILabel, UITableView, UITextField, UIView, _TtC8Chipotle24ChipotleLoadingIndicator, _TtC8Chipotle30ChipotleInlineLoadingIndicator;

@interface _TtC8Chipotle26StoreLocatorViewController : _TtC8Chipotle22ChipotleViewController <MKLocalSearchCompleterDelegate>
{
    // Error parsing type: , name: mapView
    // Error parsing type: , name: mapLoadingIndicator
    // Error parsing type: , name: loadingIndicator
    // Error parsing type: , name: closeButton
    // Error parsing type: , name: locateUserButton
    // Error parsing type: , name: storeContainerView
    // Error parsing type: , name: storeContainerBottomConstraint
    // Error parsing type: , name: storeContainerHeightConstraint
    // Error parsing type: , name: searchThisAreaButton
    // Error parsing type: , name: searchThisAreaButtonTopConstraint
    // Error parsing type: , name: searchContainerView
    // Error parsing type: , name: searchTextField
    // Error parsing type: , name: searchViewHeightConstraint
    // Error parsing type: , name: searchContainerSeparatorView
    // Error parsing type: , name: quickPickContainerView
    // Error parsing type: , name: quickPickSegmentView
    // Error parsing type: , name: quickPickSegmentViewHeightConstraint
    // Error parsing type: , name: quickPickPickupView
    // Error parsing type: , name: quickPickPickupButton
    // Error parsing type: , name: quickPickDeliveryView
    // Error parsing type: , name: quickPickDeliveryButton
    // Error parsing type: , name: pickupTableView
    // Error parsing type: , name: deliveryTableView
    // Error parsing type: , name: deliveryOutageOverlayView
    // Error parsing type: , name: deliveryOutageOverlayAnimationView
    // Error parsing type: , name: deliveryOutageOverlayInfoLabel
    // Error parsing type: , name: predictiveSearchContainerView
    // Error parsing type: , name: predictiveSearchContainerTopConstraint
    // Error parsing type: , name: predictiveSearchDivider
    // Error parsing type: , name: noPredictiveResultsView
    // Error parsing type: , name: predictiveSearchCollectionView
    // Error parsing type: , name: predictiveCollectionViewBottomConstraint
    // Error parsing type: , name: footerView
    // Error parsing type: , name: footerViewHeightConstraint
    // Error parsing type: , name: orderFromThisLocationButton
    // Error parsing type: , name: notAcceptingOrdersLabel
    // Error parsing type: , name: notAcceptingOrdersLabelWidthConstraint
    // Error parsing type: , name: footerViewBottomConstraint
    // Error parsing type: , name: footerViewLoadingIndicator
    // Error parsing type: , name: disposeBag
    // Error parsing type: , name: shouldPerformInitialSetup
    // Error parsing type: , name: noLocationSharedView
    // Error parsing type: , name: shouldPreventRefreshingData
    // Error parsing type: , name: animationView
    // Error parsing type: , name: storeContainerDimmerView
    // Error parsing type: , name: quickPickDimmerView
    // Error parsing type: , name: mapSearchPin
    // Error parsing type: , name: transitionQuickPickType
    // Error parsing type: , name: predictiveSearchCompleter
    // Error parsing type: , name: predictiveSearchResults
    // Error parsing type: , name: selectedPredictiveSearchResult
    // Error parsing type: , name: preSearchState
    // Error parsing type: , name: fakeUserAnnotation
    // Error parsing type: , name: shouldShowSearchThisArea
    // Error parsing type: , name: showingSearchThisArea
    // Error parsing type: , name: noLocationSharedViewBottomConstraint
    // Error parsing type: , name: showingNoLocationPrompt
    // Error parsing type: , name: selectingUserLocation
    // Error parsing type: , name: preSearchNoResults
    // Error parsing type: , name: handlingQuickPickSelection
    // Error parsing type: , name: detailsView
    // Error parsing type: , name: detailsViewBottomConstraint
    // Error parsing type: , name: storeSelectedCompletionHandler
    // Error parsing type: , name: selectedRestaurant
    // Error parsing type: , name: potentialDeliveryAddress
    // Error parsing type: , name: selectedDeliveryAddress
    // Error parsing type: , name: currentState
    // Error parsing type: , name: initialQuickPickState
    // Error parsing type: , name: containerStatePositions
    // Error parsing type: , name: quickPickSearchTerm
    // Error parsing type: , name: displayedRestaurants
    // Error parsing type: , name: recentAndFavorites
    // Error parsing type: , name: deliveryAddresses
    // Error parsing type: , name: quickPickSections
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didPressLocateUserButton:(id)arg1;
- (void)didPressCloseButton:(id)arg1;
- (void)didPressOrderFromThisLocationButton:(id)arg1;
- (void)didPressSearchThisArea:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
@property(nonatomic) __weak _TtC8Chipotle30ChipotleInlineLoadingIndicator *footerViewLoadingIndicator; // @synthesize footerViewLoadingIndicator;
@property(nonatomic) __weak NSLayoutConstraint *footerViewBottomConstraint; // @synthesize footerViewBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *notAcceptingOrdersLabelWidthConstraint; // @synthesize notAcceptingOrdersLabelWidthConstraint;
@property(nonatomic) __weak UILabel *notAcceptingOrdersLabel; // @synthesize notAcceptingOrdersLabel;
@property(nonatomic) __weak UIButton *orderFromThisLocationButton; // @synthesize orderFromThisLocationButton;
@property(nonatomic) __weak NSLayoutConstraint *footerViewHeightConstraint; // @synthesize footerViewHeightConstraint;
@property(nonatomic) __weak UIView *footerView; // @synthesize footerView;
@property(nonatomic) __weak NSLayoutConstraint *predictiveCollectionViewBottomConstraint; // @synthesize predictiveCollectionViewBottomConstraint;
@property(nonatomic) __weak UICollectionView *predictiveSearchCollectionView; // @synthesize predictiveSearchCollectionView;
@property(nonatomic) __weak UIView *noPredictiveResultsView; // @synthesize noPredictiveResultsView;
@property(nonatomic) __weak UIView *predictiveSearchDivider; // @synthesize predictiveSearchDivider;
@property(nonatomic) __weak NSLayoutConstraint *predictiveSearchContainerTopConstraint; // @synthesize predictiveSearchContainerTopConstraint;
@property(nonatomic) __weak UIView *predictiveSearchContainerView; // @synthesize predictiveSearchContainerView;
@property(nonatomic) __weak UILabel *deliveryOutageOverlayInfoLabel; // @synthesize deliveryOutageOverlayInfoLabel;
@property(nonatomic) __weak UIView *deliveryOutageOverlayAnimationView; // @synthesize deliveryOutageOverlayAnimationView;
@property(nonatomic) __weak UIView *deliveryOutageOverlayView; // @synthesize deliveryOutageOverlayView;
@property(nonatomic) __weak UITableView *deliveryTableView; // @synthesize deliveryTableView;
@property(nonatomic) __weak UITableView *pickupTableView; // @synthesize pickupTableView;
@property(nonatomic) __weak UIButton *quickPickDeliveryButton; // @synthesize quickPickDeliveryButton;
@property(nonatomic) __weak UIView *quickPickDeliveryView; // @synthesize quickPickDeliveryView;
@property(nonatomic) __weak UIButton *quickPickPickupButton; // @synthesize quickPickPickupButton;
@property(nonatomic) __weak UIView *quickPickPickupView; // @synthesize quickPickPickupView;
@property(nonatomic) __weak NSLayoutConstraint *quickPickSegmentViewHeightConstraint; // @synthesize quickPickSegmentViewHeightConstraint;
@property(nonatomic) __weak UIView *quickPickSegmentView; // @synthesize quickPickSegmentView;
@property(nonatomic) __weak UIView *quickPickContainerView; // @synthesize quickPickContainerView;
@property(nonatomic) __weak UIView *searchContainerSeparatorView; // @synthesize searchContainerSeparatorView;
@property(nonatomic) __weak NSLayoutConstraint *searchViewHeightConstraint; // @synthesize searchViewHeightConstraint;
@property(nonatomic) __weak UITextField *searchTextField; // @synthesize searchTextField;
@property(nonatomic) __weak UIView *searchContainerView; // @synthesize searchContainerView;
@property(nonatomic) __weak NSLayoutConstraint *searchThisAreaButtonTopConstraint; // @synthesize searchThisAreaButtonTopConstraint;
@property(nonatomic) __weak UIButton *searchThisAreaButton; // @synthesize searchThisAreaButton;
@property(nonatomic) __weak NSLayoutConstraint *storeContainerHeightConstraint; // @synthesize storeContainerHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *storeContainerBottomConstraint; // @synthesize storeContainerBottomConstraint;
@property(nonatomic) __weak UIView *storeContainerView; // @synthesize storeContainerView;
@property(nonatomic) __weak UIButton *locateUserButton; // @synthesize locateUserButton;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton;
@property(nonatomic) __weak _TtC8Chipotle24ChipotleLoadingIndicator *loadingIndicator; // @synthesize loadingIndicator;
@property(nonatomic) __weak _TtC8Chipotle30ChipotleInlineLoadingIndicator *mapLoadingIndicator; // @synthesize mapLoadingIndicator;
@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView;
- (void)didPressCancelWithName:(id)arg1;
- (void)didPressSaveWithName:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didPressDeliveryView;
- (void)didPressPickupView;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)completer:(id)arg1 didFailWithError:(id)arg2;
- (void)completerDidUpdateResults:(id)arg1;
- (void)handleDimmerViewTap;
- (void)handleQuickPickViewPanWithRecognizer:(id)arg1;
- (void)handleSearchViewPanWithRecognizer:(id)arg1;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(_Bool)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)locationDidUpdateWithNotification:(id)arg1;

@end
