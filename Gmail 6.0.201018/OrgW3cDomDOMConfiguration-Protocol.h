//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class NSString;
@protocol OrgW3cDomDOMStringList;

@protocol OrgW3cDomDOMConfiguration <JavaObject>
- (id <OrgW3cDomDOMStringList>)getParameterNames;
- (_Bool)canSetParameterWithNSString:(NSString *)arg1 withId:(id)arg2;
- (id)getParameterWithNSString:(NSString *)arg1;
- (void)setParameterWithNSString:(NSString *)arg1 withId:(id)arg2;
@end
