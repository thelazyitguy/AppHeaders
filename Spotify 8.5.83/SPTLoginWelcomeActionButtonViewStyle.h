//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"
#import "SPTLoginViewWithActionButtonsStyleable-Protocol.h"

@class NSDictionary, NSString;

@interface SPTLoginWelcomeActionButtonViewStyle : NSObject <GLUEStyle, SPTLoginViewWithActionButtonsStyleable>
{
    NSDictionary *buttonStyles;
    double _betweenButtonsMargin;
}

- (void).cxx_destruct;
@property(nonatomic) double betweenButtonsMargin; // @synthesize betweenButtonsMargin=_betweenButtonsMargin;
@property(copy, nonatomic) NSDictionary *buttonStyles; // @synthesize buttonStyles;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

