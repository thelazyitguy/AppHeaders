//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GFMIReauthenticationWrapper-Protocol.h>

@class GIMMe, NSString, UIViewController;

@interface GFMIReauthenticationWrapperImpl : NSObject <GFMIReauthenticationWrapper>
{
    GIMMe *_gimme;
    UIViewController *_viewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)requestReauthenticationOnViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

