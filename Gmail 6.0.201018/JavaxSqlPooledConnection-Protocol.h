//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@protocol JavaSqlConnection, JavaxSqlConnectionEventListener, JavaxSqlStatementEventListener;

@protocol JavaxSqlPooledConnection <JavaObject>
- (void)removeStatementEventListenerWithJavaxSqlStatementEventListener:(id <JavaxSqlStatementEventListener>)arg1;
- (void)addStatementEventListenerWithJavaxSqlStatementEventListener:(id <JavaxSqlStatementEventListener>)arg1;
- (void)removeConnectionEventListenerWithJavaxSqlConnectionEventListener:(id <JavaxSqlConnectionEventListener>)arg1;
- (void)addConnectionEventListenerWithJavaxSqlConnectionEventListener:(id <JavaxSqlConnectionEventListener>)arg1;
- (void)close;
- (id <JavaSqlConnection>)getConnection;
@end
