//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWTableCell-Protocol.h"

@class NSString;

@interface AWImageLabelCell : NSObject <AWTableCell>
{
    NSString *text;
    NSString *imageName;
    double imageAdjustment;
}

- (void).cxx_destruct;
- (_Bool)willSelectInTableView:(id)arg1;
- (id)cellForTableView:(id)arg1;
- (double)heightForTableView:(id)arg1;
- (id)initWithText:(id)arg1 imageName:(id)arg2;

@end
