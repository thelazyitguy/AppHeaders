//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SSOSafariSignInHandler;

@interface SSOSignInContext : NSObject
{
    _Bool _showsCancelButton;
    NSString *_userEmail;
    id <SSOSafariSignInHandler> _safariSignInHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SSOSafariSignInHandler> safariSignInHandler; // @synthesize safariSignInHandler=_safariSignInHandler;
@property(copy, nonatomic) NSString *userEmail; // @synthesize userEmail=_userEmail;
@property(nonatomic) _Bool showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;

@end

