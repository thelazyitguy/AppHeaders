//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ASMSessionInternal, SFSafariViewControllerDelegate;

@interface GIDASCSafariViewControllerOptions : NSObject
{
    _Bool _usePageSheetPresentation;
    unsigned long long _userInterfaceStyle;
    id <SFSafariViewControllerDelegate> _delegate;
    id <ASMSessionInternal> _session;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool usePageSheetPresentation; // @synthesize usePageSheetPresentation=_usePageSheetPresentation;
@property(retain, nonatomic) id <ASMSessionInternal> session; // @synthesize session=_session;
@property(retain, nonatomic) id <SFSafariViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
- (id)init;

@end
