//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/GMSFeatureEntityUIItem.h>

@interface GMSLineEntityUIItem : GMSFeatureEntityUIItem
{
}

+ (SEL)wasTappedSelector;
+ (struct GMSEntityTapPriority)tapPriorityForFeature:(id)arg1;
- (_Bool)isHitByTap:(const struct WrappedFrustum2D *)arg1 rectangle:(const struct Rectangle2f *)arg2 coords:(struct CGPoint)arg3 camera:(const reffed_ptr_329922e5 *)arg4;
- (id)line;

@end
