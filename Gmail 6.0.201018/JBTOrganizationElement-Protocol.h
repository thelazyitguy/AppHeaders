//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JBTCommand_Config-Protocol.h"
#import "JavaObject-Protocol.h"

@class JBTOrganizationElement_CheckedState, JBTOrganizationElement_Type, NSString;
@protocol JBTId;

@protocol JBTOrganizationElement <JBTCommand_Config, JavaObject>
- (JBTOrganizationElement_CheckedState *)getCheckedState;
- (_Bool)hasCheckedState;
- (NSString *)getDisplayName;
- (JBTOrganizationElement_Type *)getOrganizationElementType;
- (id <JBTId>)getId;
@end
