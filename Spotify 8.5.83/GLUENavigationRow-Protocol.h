//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEReusable-Protocol.h"
#import "GLUEStatefulItem-Protocol.h"
#import "GLUEStyleable-Protocol.h"

@class GLUELabel, GLUENavigationRowStyle;

@protocol GLUENavigationRow <GLUEStatefulItem, GLUEStyleable, GLUEReusable>
@property(nonatomic) long long icon;
@property(readonly, nonatomic) GLUELabel *titleLabel;
- (void)glue_applyStyle:(GLUENavigationRowStyle *)arg1;
@end

