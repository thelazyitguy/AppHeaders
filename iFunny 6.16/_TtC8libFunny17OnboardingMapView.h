//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Funny/UIScrollViewDelegate-Protocol.h>

__attribute__((visibility("hidden")))
@interface _TtC8libFunny17OnboardingMapView : UIView <UIScrollViewDelegate>
{
    // Error parsing type: , name: locationService
    // Error parsing type: , name: scrollView
    // Error parsing type: , name: approveButton
    // Error parsing type: , name: nextButton
    // Error parsing type: , name: firstPageView
    // Error parsing type: , name: secondPageView
    // Error parsing type: , name: requestPageView
    // Error parsing type: , name: pageMarkers
    // Error parsing type: , name: termsView
    // Error parsing type: , name: presentedView
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)didUpdateLocation;
- (void)didFailWithError:(id)arg1;
- (void)didChangeAuthorizationStatus:(int)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onApprove;
- (void)onNext;
- (void)showSettings;
- (void)onLabelTap:(id)arg1;
- (id)init;

@end

