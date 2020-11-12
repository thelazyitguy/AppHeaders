//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaIoFlushable-Protocol.h"

@class JavaIoConsole_ConsoleReader, JavaIoPrintWriter, NSString;

@interface JavaIoConsole : NSObject <JavaIoFlushable>
{
    JavaIoConsole_ConsoleReader *reader_;
    JavaIoPrintWriter *writer_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)makeConsole;
+ (id)getConsole;
- (void)dealloc;
- (id)writer;
- (id)readPasswordWithNSString:(id)arg1 withNSObjectArray:(id)arg2;
- (id)readPassword;
- (id)readLineWithNSString:(id)arg1 withNSObjectArray:(id)arg2;
- (id)readLine;
- (id)reader;
- (id)printfWithNSString:(id)arg1 withNSObjectArray:(id)arg2;
- (id)formatWithNSString:(id)arg1 withNSObjectArray:(id)arg2;
- (void)flush;
- (id)initWithJavaIoInputStream:(id)arg1 withJavaIoOutputStream:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
