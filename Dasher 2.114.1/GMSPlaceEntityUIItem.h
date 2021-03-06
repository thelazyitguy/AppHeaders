//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NavigationFramework/GMSEntityTappableUIItem-Protocol.h>

@class NSString;

@interface GMSPlaceEntityUIItem : NSObject <GMSEntityTappableUIItem>
{
    struct GMSEntityTapOrdering _tapOrdering;
}

- (id).cxx_construct;
@property(readonly, copy) NSString *description;
- (_Bool)matchesTappableUIItem:(id)arg1;
- (void)wasTapped;
- (_Bool)shouldMoveToEndOnTap;
- (_Bool)isHitByTap:(const struct WrappedFrustum2D *)arg1 rectangle:(const struct Rectangle2f *)arg2 coords:(struct CGPoint)arg3 camera:(const reffed_ptr_329922e5 *)arg4;
- (struct GMSEntityTapOrdering)tapOrdering;
@property(readonly, nonatomic) struct GMSCoordinate placeCoordinate;
@property(readonly, nonatomic) NSString *placeTitle;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

