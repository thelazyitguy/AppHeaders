//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaIoFilterInputStream.h"

#import "OrgApacheJamesMime4jIoLineNumberSource-Protocol.h"

@class NSString;

@interface OrgApacheJamesMime4jIoLineNumberInputStream : JavaIoFilterInputStream <OrgApacheJamesMime4jIoLineNumberSource>
{
    int lineNumber_;
}

- (int)readWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)read;
- (int)getLineNumber;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
