//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIBarButtonItem.h>

#import <Module_Framework/UIAccessibilityIdentification-Protocol.h>

@class NSString;

@interface GOOUIBarButtonItem : UIBarButtonItem <UIAccessibilityIdentification>
{
    NSString *_accessibilityIdentifier;
    struct UIEdgeInsets _layoutInsets;
}

+ (id)bundlePathWithName:(id)arg1;
+ (id)bundle;
+ (void)applyLayoutInsetsForType:(long long)arg1 item:(id)arg2;
+ (id)accessibilityIdentifierForBarButtonItemType:(long long)arg1;
+ (id)imageNameForBarButtonItemType:(long long)arg1;
+ (id)barButtonItemWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)barButtonItemWithType:(long long)arg1 color:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)barButtonItemWithType:(long long)arg1 onBackgroundColor:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)barButtonItemWithTemplatedType:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)headerBarButtonItemWithType:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)itemWithType:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets layoutInsets; // @synthesize layoutInsets=_layoutInsets;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

